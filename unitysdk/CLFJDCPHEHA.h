#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class LBGDOLIKLJH;
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLFJDCPHEHA_CTOR_OFFSET UNITYSDK_OFFSET(0xD77C940)
#define CLFJDCPHEHA_FAFJMNNJCNM_OFFSET UNITYSDK_OFFSET(0xD77C580)
#define CLFJDCPHEHA_FKBJFOJGHHF_OFFSET UNITYSDK_OFFSET(0xD77C8E0)
#define CLFJDCPHEHA_IGAMEPKGCFM_OFFSET UNITYSDK_OFFSET(0xD77C800)
#define CLFJDCPHEHA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xD77C410)
#define CLFJDCPHEHA__ONBIND_OFFSET UNITYSDK_OFFSET(0xD77C110)

inline static constexpr unsigned int CLFJDCPHEHA_TypeDefinitionIndex = 72337;

	class CLFJDCPHEHA : public ::FMPCODLIOLG
	{
	public:
		::System::String* DLJDAMGNOIM; // 0x60
		::System::String* LNDMFBFLHGK; // 0x68
		::Il2CppArray<::UnityEngine::Transform*>* PPBKHNLDGEP; // 0x70
		::System::Collections::Generic::List_1<::LBGDOLIKLJH*>* MLJDAEMEBFJ; // 0x78
		::Il2CppArray<::System::String*>* NENDKIOBLMO; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFJDCPHEHA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFJDCPHEHA__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLFJDCPHEHA_NKPPGDENJAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FKBJFOJGHHF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLFJDCPHEHA_FKBJFOJGHHF_OFFSET))(this, a1);
		}

		::System::Void FAFJMNNJCNM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLFJDCPHEHA_FAFJMNNJCNM_OFFSET))(this, a1, a2);
		}

		::System::Void IGAMEPKGCFM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLFJDCPHEHA_IGAMEPKGCFM_OFFSET))(this, a1);
		}

	};
