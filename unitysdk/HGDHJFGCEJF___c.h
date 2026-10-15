#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDHJFGCEJF;
namespace System { class Object; }

#define HGDHJFGCEJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E549A60)
#define HGDHJFGCEJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E549AA0)
#define HGDHJFGCEJF___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E549AB0)

inline static constexpr unsigned int HGDHJFGCEJF___c_TypeDefinitionIndex = 29899;

	class HGDHJFGCEJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGDHJFGCEJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDHJFGCEJF___C_CTOR_OFFSET))(this);
		}

		::HGDHJFGCEJF* __cctor_b__32_0()
		{
			return ((::HGDHJFGCEJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDHJFGCEJF___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
