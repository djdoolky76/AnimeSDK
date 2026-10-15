#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLEBBGFAKAK;
namespace System { class Object; }

#define HLEBBGFAKAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BBC20)
#define HLEBBGFAKAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BBC50)
#define HLEBBGFAKAK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5BBC60)

inline static constexpr unsigned int HLEBBGFAKAK___c_TypeDefinitionIndex = 33430;

	class HLEBBGFAKAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x479D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLEBBGFAKAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK___C_CTOR_OFFSET))(this);
		}

		::HLEBBGFAKAK* __cctor_b__23_0()
		{
			return ((::HLEBBGFAKAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEBBGFAKAK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
