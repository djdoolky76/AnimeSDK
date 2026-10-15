#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System { class Object; }

#define INJNNDGNBDN_CTOR_OFFSET UNITYSDK_OFFSET(0x164F3DD0)
#define INJNNDGNBDN_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x164F40C0)
#define INJNNDGNBDN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x164F3DE0)

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
