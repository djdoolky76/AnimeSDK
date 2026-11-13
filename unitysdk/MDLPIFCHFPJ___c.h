#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDLPIFCHFPJ;
namespace System { class Object; }

#define MDLPIFCHFPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD50A20)
#define MDLPIFCHFPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD50A50)
#define MDLPIFCHFPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD50A60)

inline static constexpr unsigned int MDLPIFCHFPJ___c_TypeDefinitionIndex = 34630;

	class MDLPIFCHFPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDLPIFCHFPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ___C_CTOR_OFFSET))(this);
		}

		::MDLPIFCHFPJ* __cctor_b__28_0()
		{
			return ((::MDLPIFCHFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLPIFCHFPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
