#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
class KAKADGHNMFK;
class LNGEHPOGLFO;
class PPFDALKOLHC;
namespace System { class String; }

#define EAKMBLKEJFF_CICOPACMINE_OFFSET UNITYSDK_OFFSET(0x1267DAF0)
#define EAKMBLKEJFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1267DC60)
#define EAKMBLKEJFF_GPJBGILFCKB_1_OFFSET UNITYSDK_OFFSET(0x1267DA10)
#define EAKMBLKEJFF_GPJBGILFCKB_OFFSET UNITYSDK_OFFSET(0x1267D910)
#define EAKMBLKEJFF_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0x1267D8A0)
#define EAKMBLKEJFF_KINELKOLEGI_OFFSET UNITYSDK_OFFSET(0x1267DBD0)

inline static constexpr unsigned int EAKMBLKEJFF_TypeDefinitionIndex = 77569;

	class EAKMBLKEJFF : public ::LEMPCCICHAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKMBLKEJFF_CTOR_OFFSET))(this);
		}

		::System::String* KAJOBJFIAMJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKMBLKEJFF_KAJOBJFIAMJ_OFFSET))(this);
		}

		::System::Void GPJBGILFCKB(::LNGEHPOGLFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNGEHPOGLFO*))((::PBYTE)hIl2Cpp + EAKMBLKEJFF_GPJBGILFCKB_OFFSET))(this, a1);
		}

		::System::Void GPJBGILFCKB_1(::PPFDALKOLHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPFDALKOLHC*))((::PBYTE)hIl2Cpp + EAKMBLKEJFF_GPJBGILFCKB_1_OFFSET))(this, a1);
		}

		::System::Void CICOPACMINE(::KAKADGHNMFK* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::UInt32))((::PBYTE)hIl2Cpp + EAKMBLKEJFF_CICOPACMINE_OFFSET))(this, a1, a2);
		}

		::System::Void KINELKOLEGI(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + EAKMBLKEJFF_KINELKOLEGI_OFFSET))(this, a1);
		}

	};
