#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDDJHEABHBG_EEEMIKBONLN;
class PDDJHEABHBG_OFGJIFKNJCA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDDJHEABHBG_BCKGEKNAHPN_OFFSET UNITYSDK_OFFSET(0xC00E8E0)
#define PDDJHEABHBG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC00EE30)
#define PDDJHEABHBG_CEPLNGBLDIB_OFFSET UNITYSDK_OFFSET(0xC00DD90)
#define PDDJHEABHBG_CGCPPMMNFDI_OFFSET UNITYSDK_OFFSET(0xC00EB50)
#define PDDJHEABHBG_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC00DAF0)
#define PDDJHEABHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xC00ED90)
#define PDDJHEABHBG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC00D990)
#define PDDJHEABHBG_OHNELECFBCJ_OFFSET UNITYSDK_OFFSET(0xC00E6F0)

inline static constexpr unsigned int PDDJHEABHBG_TypeDefinitionIndex = 60941;

	class PDDJHEABHBG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* BAAFDIGBNJD; // 0x10
		::System::Object* DCOPELFHOLO; // 0x18
		::PDDJHEABHBG_EEEMIKBONLN* MMJEMDOJACA; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* DJODFPFFEPA; // 0x28
		::System::Int32 HDHPNOOMAGE; // 0x30
		::System::Int32 BPKKKMOCFIP; // 0x34
		static ::System::Int32* StaticGet_NEAJAFLCGCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PDDJHEABHBG")->GetStaticField(0x14D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDJHEABHBG_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + PDDJHEABHBG_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDJHEABHBG_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void CEPLNGBLDIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDDJHEABHBG_CEPLNGBLDIB_OFFSET))(this, a1);
		}

		::System::Void BCKGEKNAHPN(::PDDJHEABHBG_OFGJIFKNJCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDDJHEABHBG_OFGJIFKNJCA*))((::PBYTE)hIl2Cpp + PDDJHEABHBG_BCKGEKNAHPN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* CGCPPMMNFDI(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PDDJHEABHBG_CGCPPMMNFDI_OFFSET))(this, a1, a2);
		}

		::System::Void OHNELECFBCJ(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PDDJHEABHBG_OHNELECFBCJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
