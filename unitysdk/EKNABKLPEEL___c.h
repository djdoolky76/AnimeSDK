#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKNABKLPEEL;
namespace System { class Object; }

#define EKNABKLPEEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E299620)
#define EKNABKLPEEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E299660)
#define EKNABKLPEEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E299670)

inline static constexpr unsigned int EKNABKLPEEL___c_TypeDefinitionIndex = 25259;

	class EKNABKLPEEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x504E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKNABKLPEEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL___C_CTOR_OFFSET))(this);
		}

		::EKNABKLPEEL* __cctor_b__28_0()
		{
			return ((::EKNABKLPEEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
