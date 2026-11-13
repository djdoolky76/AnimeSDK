#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLFABOEKMJI;
namespace System { class Object; }

#define CLFABOEKMJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205DE140)
#define CLFABOEKMJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205DE180)
#define CLFABOEKMJI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205DE190)

inline static constexpr unsigned int CLFABOEKMJI___c_TypeDefinitionIndex = 30046;

	class CLFABOEKMJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x143F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLFABOEKMJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI___C_CTOR_OFFSET))(this);
		}

		::CLFABOEKMJI* __cctor_b__23_0()
		{
			return ((::CLFABOEKMJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
