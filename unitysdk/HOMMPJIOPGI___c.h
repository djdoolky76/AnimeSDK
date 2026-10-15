#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOMMPJIOPGI;
namespace System { class Object; }

#define HOMMPJIOPGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C1F20)
#define HOMMPJIOPGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C1F60)
#define HOMMPJIOPGI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5C1F70)

inline static constexpr unsigned int HOMMPJIOPGI___c_TypeDefinitionIndex = 25494;

	class HOMMPJIOPGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DD60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOMMPJIOPGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI___C_CTOR_OFFSET))(this);
		}

		::HOMMPJIOPGI* __cctor_b__43_0()
		{
			return ((::HOMMPJIOPGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
