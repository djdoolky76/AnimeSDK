#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEJFGFKAKFI;
namespace RPG::Client { class ServerDispatchData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFDGMMPMGIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x16BB8DF0)
#define HFDGMMPMGIC_CTOR_OFFSET UNITYSDK_OFFSET(0x16BB77E0)
#define HFDGMMPMGIC_DPIOCBALEGF_OFFSET UNITYSDK_OFFSET(0x16BB8C90)
#define HFDGMMPMGIC_GET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x16BB77A0)
#define HFDGMMPMGIC_GET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x16BB77C0)
#define HFDGMMPMGIC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16BB8910)
#define HFDGMMPMGIC_JGOJIBPEOAH_OFFSET UNITYSDK_OFFSET(0x16BB85C0)
#define HFDGMMPMGIC_JKKJBGCOFKA_OFFSET UNITYSDK_OFFSET(0x16BB8BF0)
#define HFDGMMPMGIC_KIGFIOEOJCN_OFFSET UNITYSDK_OFFSET(0x16BB8D00)
#define HFDGMMPMGIC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16BB7D80)
#define HFDGMMPMGIC_LDDGANIJGDP_OFFSET UNITYSDK_OFFSET(0x16BB80D0)
#define HFDGMMPMGIC_NKKOMCKELHA_OFFSET UNITYSDK_OFFSET(0x16BB89B0)
#define HFDGMMPMGIC_PNOEGAKIGJE_OFFSET UNITYSDK_OFFSET(0x16BB7E20)
#define HFDGMMPMGIC_SET_LUAREVISION_OFFSET UNITYSDK_OFFSET(0x16BB77B0)
#define HFDGMMPMGIC_SET_LUATESTCLASSNAME_OFFSET UNITYSDK_OFFSET(0x16BB77D0)

inline static constexpr unsigned int HFDGMMPMGIC_TypeDefinitionIndex = 70245;

	class HFDGMMPMGIC : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* GLBHIKPFIHH; // 0x10
		::JEJFGFKAKFI* LCGHJKFMIBI; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* HGBMIPAEMOJ; // 0x20
		::System::String* _LuaTestClassName_k__BackingField; // 0x28
		::System::Single MPLIIBHPGLG; // 0x30
		::System::UInt32 CLCNHJFFNNH; // 0x34
		::System::UInt32 ODBEEJHGNMN; // 0x38
		::System::Int32 _LuaRevision_k__BackingField; // 0x3C
		static ::System::String** StaticGet_LBIJBILPPDE()
		{
			return (::System::String**)UnitySDK::FromName("", "HFDGMMPMGIC")->GetStaticField(0x4D160);
		}

		static ::System::Boolean* StaticGet_NNDDLEMBIDP()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HFDGMMPMGIC")->GetStaticField(0xF8F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFDGMMPMGIC_CCTOR_OFFSET))();
		}

		::System::Int32 get_LuaRevision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_GET_LUAREVISION_OFFSET))(this);
		}

		::System::Void set_LuaRevision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_SET_LUAREVISION_OFFSET))(this, a1);
		}

		::System::String* get_LuaTestClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_GET_LUATESTCLASSNAME_OFFSET))(this);
		}

		::System::Void set_LuaTestClassName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_SET_LUATESTCLASSNAME_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PNOEGAKIGJE(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_PNOEGAKIGJE_OFFSET))(this, a1);
		}

		::System::Void LDDGANIJGDP(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_LDDGANIJGDP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NKKOMCKELHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_NKKOMCKELHA_OFFSET))(this, a1);
		}

		::System::Void JKKJBGCOFKA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_JKKJBGCOFKA_OFFSET))(this, a1);
		}

		::System::Void DPIOCBALEGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_DPIOCBALEGF_OFFSET))(this, a1);
		}

		::System::Int32 KIGFIOEOJCN(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_KIGFIOEOJCN_OFFSET))(this, a1);
		}

		::System::Void JGOJIBPEOAH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFDGMMPMGIC_JGOJIBPEOAH_OFFSET))(this, a1);
		}

	};
