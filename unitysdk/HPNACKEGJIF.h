#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJPKLDCIKGL;
class BACGJKIKHEO;
class GPLMLPKBGGE;

#define HPNACKEGJIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5598F0)
#define HPNACKEGJIF_KKMDPIMBCML_1_OFFSET UNITYSDK_OFFSET(0x1C559900)
#define HPNACKEGJIF_KKMDPIMBCML_OFFSET UNITYSDK_OFFSET(0x1C556020)

	class HPNACKEGJIF : public ::System::Object
	{
	public:
		::BACGJKIKHEO* INEPFFPOFGM; // 0x10
		::System::Void _ctor(::BACGJKIKHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACGJKIKHEO*))((::PBYTE)hIl2Cpp + HPNACKEGJIF_CTOR_OFFSET))(this, a1);
		}

		::AJPKLDCIKGL* KKMDPIMBCML(::System::UInt32 a1)
		{
			return ((::AJPKLDCIKGL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPNACKEGJIF_KKMDPIMBCML_OFFSET))(this, a1);
		}

		::AJPKLDCIKGL* KKMDPIMBCML_1(::GPLMLPKBGGE* a1)
		{
			return ((::AJPKLDCIKGL*(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + HPNACKEGJIF_KKMDPIMBCML_1_OFFSET))(this, a1);
		}

	};
