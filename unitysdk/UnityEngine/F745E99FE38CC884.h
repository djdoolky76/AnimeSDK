#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F287B1B0B1DC5D89;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_F745E99FE38CC884_E7302F09539E4F34_OFFSET UNITYSDK_OFFSET(0x417D340)
#define UNITYENGINE_F745E99FE38CC884_FFA8D674DA777E35_OFFSET UNITYSDK_OFFSET(0x417D0B0)
#define UNITYENGINE_F745E99FE38CC884__CCTOR_OFFSET UNITYSDK_OFFSET(0x417D2C0)

namespace UnityEngine
{
	inline static constexpr unsigned int F745E99FE38CC884_TypeDefinitionIndex = 17676;

	class F745E99FE38CC884 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::F287B1B0B1DC5D89*>** StaticGet_F97C2EEF1F3FA8D9()
		{
			return (::System::Collections::Generic::List_1<::F287B1B0B1DC5D89*>**)Il2CppClass::FromTypeDefinitionIndex(F745E99FE38CC884_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Collections::Generic::List_1<::F287B1B0B1DC5D89*>* E7302F09539E4F34()
		{
			return ((::System::Collections::Generic::List_1<::F287B1B0B1DC5D89*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_F745E99FE38CC884_E7302F09539E4F34_OFFSET))();
		}

		static ::System::Void FFA8D674DA777E35(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_F745E99FE38CC884_FFA8D674DA777E35_OFFSET))(EFF983A80A48BB2A);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_F745E99FE38CC884__CCTOR_OFFSET))();
		}
	};
}
