#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGABLJFOKDG;
namespace System { class Object; }

#define HGABLJFOKDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E545E90)
#define HGABLJFOKDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E545ED0)
#define HGABLJFOKDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E545EE0)

inline static constexpr unsigned int HGABLJFOKDG___c_TypeDefinitionIndex = 32516;

	class HGABLJFOKDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGABLJFOKDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGABLJFOKDG___C_CTOR_OFFSET))(this);
		}

		::HGABLJFOKDG* __cctor_b__33_0()
		{
			return ((::HGABLJFOKDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGABLJFOKDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
