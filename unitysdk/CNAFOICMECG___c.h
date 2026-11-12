#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNAFOICMECG;
namespace System { class Object; }

#define CNAFOICMECG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3FE2B0)
#define CNAFOICMECG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3FE2F0)
#define CNAFOICMECG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F3FE300)

inline static constexpr unsigned int CNAFOICMECG___c_TypeDefinitionIndex = 28558;

	class CNAFOICMECG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNAFOICMECG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG___C_CTOR_OFFSET))(this);
		}

		::CNAFOICMECG* __cctor_b__18_0()
		{
			return ((::CNAFOICMECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAFOICMECG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
