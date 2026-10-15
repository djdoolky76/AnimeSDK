#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMFKBFOFGGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7E210)
#define PMFKBFOFGGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC7E700)
#define PMFKBFOFGGN_HLMJCBKLFCJ_OFFSET UNITYSDK_OFFSET(0x1EC76420)
#define PMFKBFOFGGN_KPCNDNEGCAH_OFFSET UNITYSDK_OFFSET(0x1EC90B60)
#define PMFKBFOFGGN_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1EC75FC0)
#define PMFKBFOFGGN_MKMFKDBLODB_OFFSET UNITYSDK_OFFSET(0x1EC760A0)

inline static constexpr unsigned int PMFKBFOFGGN_TypeDefinitionIndex = 44317;

	class PMFKBFOFGGN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Object*>* LBHPPFMAEEI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKBFOFGGN_CTOR_OFFSET))(this);
		}

		::System::Void MKMFKDBLODB(::ECIAICDLAHO* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECIAICDLAHO*, ::System::Object*))((::PBYTE)hIl2Cpp + PMFKBFOFGGN_MKMFKDBLODB_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCJMKJPECAP(::ECIAICDLAHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + PMFKBFOFGGN_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Object* HLMJCBKLFCJ(::ECIAICDLAHO* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + PMFKBFOFGGN_HLMJCBKLFCJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKBFOFGGN_DISPOSE_OFFSET))(this);
		}

		::System::String* KPCNDNEGCAH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKBFOFGGN_KPCNDNEGCAH_OFFSET))(this);
		}

	};
