#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFACHPPOANI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABLGCPNNDLK_BOCIGPKKEBL_OFFSET UNITYSDK_OFFSET(0xB106CE0)
#define ABLGCPNNDLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB107500)
#define ABLGCPNNDLK_DMALEBOOOLJ_OFFSET UNITYSDK_OFFSET(0xB106B40)
#define ABLGCPNNDLK_GCFIFILAALG_OFFSET UNITYSDK_OFFSET(0xB106A90)
#define ABLGCPNNDLK_GIBCIHJMPLN_OFFSET UNITYSDK_OFFSET(0xB106E80)
#define ABLGCPNNDLK_JFPANKOOGLE_OFFSET UNITYSDK_OFFSET(0xB107020)
#define ABLGCPNNDLK_LDNFLKPEABM_OFFSET UNITYSDK_OFFSET(0xB1071C0)
#define ABLGCPNNDLK_MBDNGNPHDNL_OFFSET UNITYSDK_OFFSET(0xB107360)

	class ABLGCPNNDLK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HFACHPPOANI*>* LAHJMFDLJPL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_CTOR_OFFSET))(this);
		}

		::System::Void GCFIFILAALG(::HFACHPPOANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFACHPPOANI*))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_GCFIFILAALG_OFFSET))(this, a1);
		}

		::System::Void DMALEBOOOLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_DMALEBOOOLJ_OFFSET))(this);
		}

		::System::Void BOCIGPKKEBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_BOCIGPKKEBL_OFFSET))(this);
		}

		::System::Void GIBCIHJMPLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_GIBCIHJMPLN_OFFSET))(this);
		}

		::System::Void JFPANKOOGLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_JFPANKOOGLE_OFFSET))(this);
		}

		::System::Void LDNFLKPEABM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_LDNFLKPEABM_OFFSET))(this);
		}

		::System::Void MBDNGNPHDNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLGCPNNDLK_MBDNGNPHDNL_OFFSET))(this);
		}

	};
