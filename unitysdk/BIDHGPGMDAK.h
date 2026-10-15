#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKNEHPCANEM.h"
#include "unitysdk/System/Object.h"
class CFIHNPKOEMD;
class LCJIAMCDDFL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIDHGPGMDAK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB49E3D0)
#define BIDHGPGMDAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB49E520)
#define BIDHGPGMDAK_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xB49E3B0)
#define BIDHGPGMDAK_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xB49E3C0)

inline static constexpr unsigned int BIDHGPGMDAK_TypeDefinitionIndex = 62747;

	class BIDHGPGMDAK : public ::System::Object
	{
	public:
		::CFIHNPKOEMD* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::AKNEHPCANEM, ::LCJIAMCDDFL*>* BKJPPNCGPOD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDHGPGMDAK_CTOR_OFFSET))(this);
		}

		::CFIHNPKOEMD* get_Factory()
		{
			return ((::CFIHNPKOEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDHGPGMDAK_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::CFIHNPKOEMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFIHNPKOEMD*))((::PBYTE)hIl2Cpp + BIDHGPGMDAK_SET_FACTORY_OFFSET))(this, a1);
		}

		::LCJIAMCDDFL* ACMKLFOMPFC(::AKNEHPCANEM a1)
		{
			return ((::LCJIAMCDDFL*(*)(::PVOID, ::AKNEHPCANEM))((::PBYTE)hIl2Cpp + BIDHGPGMDAK_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
