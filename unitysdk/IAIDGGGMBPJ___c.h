#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAIDGGGMBPJ;
namespace System { class Object; }

#define IAIDGGGMBPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F902940)
#define IAIDGGGMBPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F902970)
#define IAIDGGGMBPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F902980)

inline static constexpr unsigned int IAIDGGGMBPJ___c_TypeDefinitionIndex = 35429;

	class IAIDGGGMBPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAIDGGGMBPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ___C_CTOR_OFFSET))(this);
		}

		::IAIDGGGMBPJ* __cctor_b__28_0()
		{
			return ((::IAIDGGGMBPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIDGGGMBPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
