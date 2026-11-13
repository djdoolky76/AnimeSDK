#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class StreamWriter; }

#define MGKKMAJDHOP_CCKNBJMOEPN_OFFSET UNITYSDK_OFFSET(0x1BD06230)
#define MGKKMAJDHOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD06300)
#define MGKKMAJDHOP_DAMECECDJHH_OFFSET UNITYSDK_OFFSET(0x1BD061D0)
#define MGKKMAJDHOP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1BD04F60)
#define MGKKMAJDHOP_DJFELJABBHP_OFFSET UNITYSDK_OFFSET(0x1BD06170)
#define MGKKMAJDHOP_GET_ENABLEASSETLOADRECORD_OFFSET UNITYSDK_OFFSET(0x1BD06290)
#define MGKKMAJDHOP_GNAAOCHCEOB_OFFSET UNITYSDK_OFFSET(0x1BD05C10)
#define MGKKMAJDHOP_IBHCPBKNIOI_OFFSET UNITYSDK_OFFSET(0x1BD055B0)
#define MGKKMAJDHOP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1BD04EC0)
#define MGKKMAJDHOP_MNFOFJKGCHL_OFFSET UNITYSDK_OFFSET(0x1BD05500)
#define MGKKMAJDHOP_NIFLOHIKPCO_OFFSET UNITYSDK_OFFSET(0x1BD05B60)
#define MGKKMAJDHOP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1BD053B0)
#define MGKKMAJDHOP_SET_ENABLEASSETLOADRECORD_OFFSET UNITYSDK_OFFSET(0x1BD062D0)

inline static constexpr unsigned int MGKKMAJDHOP_TypeDefinitionIndex = 42353;

	class MGKKMAJDHOP : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_IPBLECJACII()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0xB850);
		}

		static ::System::String** StaticGet_KBINADGPLBO()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0xB858);
		}

		static ::System::IO::StreamWriter** StaticGet_IADACDFOAJC()
		{
			return (::System::IO::StreamWriter**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0xB860);
		}

		static ::System::String** StaticGet_MHINMLHJKKN()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0xB868);
		}

		static ::System::Boolean* StaticGet__EnableAssetLoadRecord_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x1640);
		}

		static ::System::Int32* StaticGet_BMLMPIHLNDP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x1644);
		}

		// static const ::System::Object DHJCCOOBGIE; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_CCTOR_OFFSET))();
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_DIOEAJEHHND_OFFSET))();
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_PJPFIHFAHGO_OFFSET))();
		}

		static ::System::Void MNFOFJKGCHL(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MGKKMAJDHOP_MNFOFJKGCHL_OFFSET))(a1, a2);
		}

		static ::System::Void IBHCPBKNIOI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MGKKMAJDHOP_IBHCPBKNIOI_OFFSET))(a1, a2);
		}

		static ::System::Void NIFLOHIKPCO(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MGKKMAJDHOP_NIFLOHIKPCO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GNAAOCHCEOB(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MGKKMAJDHOP_GNAAOCHCEOB_OFFSET))(a1, a2, a3);
		}

		static ::System::String* DJFELJABBHP()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_DJFELJABBHP_OFFSET))();
		}

		static ::System::String* DAMECECDJHH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_DAMECECDJHH_OFFSET))();
		}

		static ::System::String* CCKNBJMOEPN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_CCKNBJMOEPN_OFFSET))();
		}

		static ::System::Boolean get_EnableAssetLoadRecord()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGKKMAJDHOP_GET_ENABLEASSETLOADRECORD_OFFSET))();
		}

		static ::System::Void set_EnableAssetLoadRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MGKKMAJDHOP_SET_ENABLEASSETLOADRECORD_OFFSET))(a1);
		}

	};
