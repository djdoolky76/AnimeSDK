#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAFIJAFIPN;
namespace System { class Object; }

#define CJAFIJAFIPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0ABA10)
#define CJAFIJAFIPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0ABA50)
#define CJAFIJAFIPN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0ABA60)

inline static constexpr unsigned int CJAFIJAFIPN___c_TypeDefinitionIndex = 25640;

	class CJAFIJAFIPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJAFIJAFIPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN___C_CTOR_OFFSET))(this);
		}

		::CJAFIJAFIPN* __cctor_b__28_0()
		{
			return ((::CJAFIJAFIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
