#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System { class Object; }

#define INJNNDGNBDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F3E00)
#define INJNNDGNBDN_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x1A5F40F0)
#define INJNNDGNBDN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1A5F3E10)

inline static constexpr unsigned int INJNNDGNBDN_TypeDefinitionIndex = 65602;

	class INJNNDGNBDN : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* NEBLFPNBHFL; // 0x10
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + INJNNDGNBDN_CTOR_OFFSET))(this, a1);
		}

		::System::Object* KFGJEKJHIMB()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INJNNDGNBDN_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + INJNNDGNBDN_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
