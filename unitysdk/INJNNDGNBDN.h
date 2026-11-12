#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System { class Object; }

#define INJNNDGNBDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB824E90)
#define INJNNDGNBDN_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xB825180)
#define INJNNDGNBDN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB824EA0)

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
