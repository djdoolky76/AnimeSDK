#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class StreamWriter; }

#define MGKKMAJDHOP_CCKNBJMOEPN_OFFSET UNITYSDK_OFFSET(0x1C4BC560)
#define MGKKMAJDHOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4BC630)
#define MGKKMAJDHOP_DAMECECDJHH_OFFSET UNITYSDK_OFFSET(0x1C4BC500)
#define MGKKMAJDHOP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1C4BB250)
#define MGKKMAJDHOP_DJFELJABBHP_OFFSET UNITYSDK_OFFSET(0x1C4BC4A0)
#define MGKKMAJDHOP_GET_ENABLEASSETLOADRECORD_OFFSET UNITYSDK_OFFSET(0x1C4BC5C0)
#define MGKKMAJDHOP_GNAAOCHCEOB_OFFSET UNITYSDK_OFFSET(0x1C4BBF40)
#define MGKKMAJDHOP_IBHCPBKNIOI_OFFSET UNITYSDK_OFFSET(0x1C4BB8E0)
#define MGKKMAJDHOP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C4BB1B0)
#define MGKKMAJDHOP_MNFOFJKGCHL_OFFSET UNITYSDK_OFFSET(0x1C4BB830)
#define MGKKMAJDHOP_NIFLOHIKPCO_OFFSET UNITYSDK_OFFSET(0x1C4BBE90)
#define MGKKMAJDHOP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C4BB6D0)
#define MGKKMAJDHOP_SET_ENABLEASSETLOADRECORD_OFFSET UNITYSDK_OFFSET(0x1C4BC600)

	class MGKKMAJDHOP : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_KBINADGPLBO()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x14430);
		}

		static ::System::IO::StreamWriter** StaticGet_IADACDFOAJC()
		{
			return (::System::IO::StreamWriter**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x14438);
		}

		static ::System::String** StaticGet_IPBLECJACII()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x14440);
		}

		static ::System::String** StaticGet_MHINMLHJKKN()
		{
			return (::System::String**)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x14448);
		}

		static ::System::Int32* StaticGet_BMLMPIHLNDP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x4D00);
		}

		static ::System::Boolean* StaticGet__EnableAssetLoadRecord_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGKKMAJDHOP")->GetStaticField(0x4D04);
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
