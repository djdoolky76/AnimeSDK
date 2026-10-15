#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBNOGIFIKBC;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EARLYACCESSCONTENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD01580)
#define RPG_CLIENT_EARLYACCESSCONTENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD015B0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C__GETALLFLOORIDS_B__25_0_OFFSET UNITYSDK_OFFSET(0xCD015C0)
#define RPG_CLIENT_EARLYACCESSCONTENT___C___PREPAREFLOORDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0xCD01620)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessContent___c_TypeDefinitionIndex = 63642;

	class EarlyAccessContent___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::PBNOGIFIKBC*, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Converter_2<::PBNOGIFIKBC*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2EB60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2EB68);
		}

		static ::System::Func_2<::PBNOGIFIKBC*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::PBNOGIFIKBC*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2EB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllFloorIDs_b__25_0(::PBNOGIFIKBC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PBNOGIFIKBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C__GETALLFLOORIDS_B__25_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __PrepareFloorData_b__38_0(::PBNOGIFIKBC* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::PBNOGIFIKBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSCONTENT___C___PREPAREFLOORDATA_B__38_0_OFFSET))(this, a1);
		}

	};
}
