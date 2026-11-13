#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMFKBFOFGGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53A6F0)
#define PMFKBFOFGGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E53ABE0)
#define PMFKBFOFGGN_HLMJCBKLFCJ_OFFSET UNITYSDK_OFFSET(0x1E532910)
#define PMFKBFOFGGN_KPCNDNEGCAH_OFFSET UNITYSDK_OFFSET(0x1E54D000)
#define PMFKBFOFGGN_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1E5324B0)
#define PMFKBFOFGGN_MKMFKDBLODB_OFFSET UNITYSDK_OFFSET(0x1E532590)

inline static constexpr unsigned int PMFKBFOFGGN_TypeDefinitionIndex = 45392;

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
