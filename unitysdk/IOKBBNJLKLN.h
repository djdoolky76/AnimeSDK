#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMOHACFGKLF;
class HDBLOCLJPOF;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IOKBBNJLKLN_ACJIJEGNHEH_1_OFFSET UNITYSDK_OFFSET(0x165072F0)
#define IOKBBNJLKLN_ACJIJEGNHEH_OFFSET UNITYSDK_OFFSET(0x16507170)
#define IOKBBNJLKLN_BKHBLAGGPEF_OFFSET UNITYSDK_OFFSET(0x16504CC0)
#define IOKBBNJLKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x16504BA0)
#define IOKBBNJLKLN_FMDJFNAPJCP_OFFSET UNITYSDK_OFFSET(0x16504F10)
#define IOKBBNJLKLN_GBCLPGHOIBC_OFFSET UNITYSDK_OFFSET(0x16506720)
#define IOKBBNJLKLN_JLGPOJKDPBC_OFFSET UNITYSDK_OFFSET(0x16505150)
#define IOKBBNJLKLN_KCPOLIHBPDB_OFFSET UNITYSDK_OFFSET(0x16505D40)
#define IOKBBNJLKLN_LKGAOBBOPHE_OFFSET UNITYSDK_OFFSET(0x16506810)

inline static constexpr unsigned int IOKBBNJLKLN_TypeDefinitionIndex = 64470;

	class IOKBBNJLKLN : public ::System::Object
	{
	public:
		::EMOHACFGKLF* KPKAEPANNGD; // 0x10
		::System::Random* MJGJDDBMIEL; // 0x18
		::System::Collections::Generic::List_1<::HDBLOCLJPOF*>* BGHKIAJMNCP; // 0x20
		::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Collections::Generic::List_1<::HDBLOCLJPOF*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Collections::Generic::List_1<::HDBLOCLJPOF*>*))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Double BKHBLAGGPEF(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_BKHBLAGGPEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Double FMDJFNAPJCP(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_FMDJFNAPJCP_OFFSET))(this, a1, a2, a3);
		}

		::HDBLOCLJPOF* JLGPOJKDPBC(::System::Double a1, ::System::Int32 a2)
		{
			return ((::HDBLOCLJPOF*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_JLGPOJKDPBC_OFFSET))(this, a1, a2);
		}

		::HDBLOCLJPOF* KCPOLIHBPDB(::System::Double a1, ::System::Int32 a2)
		{
			return ((::HDBLOCLJPOF*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_KCPOLIHBPDB_OFFSET))(this, a1, a2);
		}

		::System::Double GBCLPGHOIBC(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_GBCLPGHOIBC_OFFSET))(this, a1, a2, a3);
		}

		::HDBLOCLJPOF* LKGAOBBOPHE(::System::Double a1, ::System::Int32 a2)
		{
			return ((::HDBLOCLJPOF*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_LKGAOBBOPHE_OFFSET))(this, a1, a2);
		}

		::HDBLOCLJPOF* ACJIJEGNHEH(::System::Double a1)
		{
			return ((::HDBLOCLJPOF*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_ACJIJEGNHEH_OFFSET))(this, a1);
		}

		::HDBLOCLJPOF* ACJIJEGNHEH_1(::HDBLOCLJPOF* a1)
		{
			return ((::HDBLOCLJPOF*(*)(::PVOID, ::HDBLOCLJPOF*))((::PBYTE)hIl2Cpp + IOKBBNJLKLN_ACJIJEGNHEH_1_OFFSET))(this, a1);
		}

	};
