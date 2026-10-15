#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class HKNBPHAJEJF;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPERATIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA15BA0)
#define RPG_CLIENT_OPERATIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA15BE0)
#define RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_0_OFFSET UNITYSDK_OFFSET(0xDA15BF0)
#define RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_1_OFFSET UNITYSDK_OFFSET(0xDA15C20)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c_TypeDefinitionIndex = 66419;

	class OperationModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IHGIENOHBMJ*, ::HKNBPHAJEJF*>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::HKNBPHAJEJF*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xDBB0);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xDBB8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xDBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendUseCDKeyHttpReq_b__54_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_0_OFFSET))(this, a1);
		}

		::HKNBPHAJEJF* _SendUseCDKeyHttpReq_b__54_1(::IHGIENOHBMJ* a1)
		{
			return ((::HKNBPHAJEJF*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__SENDUSECDKEYHTTPREQ_B__54_1_OFFSET))(this, a1);
		}

	};
}
