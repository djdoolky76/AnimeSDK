#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFAIADMGHHJ;
class JPFJJLEPGBC;
class KEOMPOEIELK;
class MCFDMCPGEBD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPMAOLIGPAP_BPFHDPHJBBI_OFFSET UNITYSDK_OFFSET(0x1912BDC0)
#define KPMAOLIGPAP_CNHNAJOKJFG_OFFSET UNITYSDK_OFFSET(0x1912B740)
#define KPMAOLIGPAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1912B680)
#define KPMAOLIGPAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1912BE10)
#define KPMAOLIGPAP_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1912B700)
#define KPMAOLIGPAP_GET_RESOLVEDPROFILE_OFFSET UNITYSDK_OFFSET(0x1912B720)
#define KPMAOLIGPAP_JBHOKFEIJOC_OFFSET UNITYSDK_OFFSET(0x1912BBE0)
#define KPMAOLIGPAP_JLJLAOADGGI_OFFSET UNITYSDK_OFFSET(0x1912BCC0)
#define KPMAOLIGPAP_KIACFBDHJPH_OFFSET UNITYSDK_OFFSET(0x1912BD10)
#define KPMAOLIGPAP_OCODIDEGBDC_OFFSET UNITYSDK_OFFSET(0x1912BA20)
#define KPMAOLIGPAP_OHFGPGIAINJ_OFFSET UNITYSDK_OFFSET(0x1912BC40)
#define KPMAOLIGPAP_PFBHEJFEODA_OFFSET UNITYSDK_OFFSET(0x1912B750)
#define KPMAOLIGPAP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1912B790)
#define KPMAOLIGPAP_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1912B710)
#define KPMAOLIGPAP_SET_RESOLVEDPROFILE_OFFSET UNITYSDK_OFFSET(0x1912B730)

inline static constexpr unsigned int KPMAOLIGPAP_TypeDefinitionIndex = 61946;

	class KPMAOLIGPAP : public ::System::Object
	{
	public:
		::KEOMPOEIELK* JPNMOJGMOMF; // 0x10
		::System::Collections::Generic::List_1<::System::Action*>* LOJJMGIOPEK; // 0x18
		::MCFDMCPGEBD* _ResolvedProfile_k__BackingField; // 0x20
		::JPFJJLEPGBC* _Context_k__BackingField; // 0x28
		::System::Boolean GFAMGLFOMGI; // 0x30
		::System::Void _ctor(::JPFJJLEPGBC* a1, ::MCFDMCPGEBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JPFJJLEPGBC*, ::MCFDMCPGEBD*))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_CTOR_OFFSET))(this, a1, a2);
		}

		::JPFJJLEPGBC* get_Context()
		{
			return ((::JPFJJLEPGBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::JPFJJLEPGBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPFJJLEPGBC*))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_SET_CONTEXT_OFFSET))(this, a1);
		}

		::MCFDMCPGEBD* get_ResolvedProfile()
		{
			return ((::MCFDMCPGEBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_GET_RESOLVEDPROFILE_OFFSET))(this);
		}

		::System::Void set_ResolvedProfile(::MCFDMCPGEBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCFDMCPGEBD*))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_SET_RESOLVEDPROFILE_OFFSET))(this, a1);
		}

		::System::Boolean CNHNAJOKJFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_CNHNAJOKJFG_OFFSET))(this);
		}

		::KEOMPOEIELK* PFBHEJFEODA()
		{
			return ((::KEOMPOEIELK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_PFBHEJFEODA_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

		::System::Void JBHOKFEIJOC(::FFAIADMGHHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFAIADMGHHJ*))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_JBHOKFEIJOC_OFFSET))(this, a1);
		}

		::System::Void OHFGPGIAINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_OHFGPGIAINJ_OFFSET))(this);
		}

		::System::Boolean JLJLAOADGGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_JLJLAOADGGI_OFFSET))(this);
		}

		::System::Boolean KIACFBDHJPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_KIACFBDHJPH_OFFSET))(this);
		}

		::System::Void BPFHDPHJBBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_BPFHDPHJBBI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_DISPOSE_OFFSET))(this);
		}

		::System::Void OCODIDEGBDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMAOLIGPAP_OCODIDEGBDC_OFFSET))(this);
		}

	};
