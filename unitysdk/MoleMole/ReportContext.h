#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EHOFPPJJMDM;
class FBHPDPBIGPK;
class JJPDGONFBFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_REPORTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A055B0)

namespace MoleMole
{
	inline static constexpr unsigned int ReportContext_TypeDefinitionIndex = 48271;

	class ReportContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::BDEHNBMOHMG>* extraReportTypes; // 0x28
		::FBHPDPBIGPK* info; // 0x30
		::EHOFPPJJMDM* playerForumPostData; // 0x38
		::JJPDGONFBFB* photoWallNetworkData; // 0x40
		::System::Boolean isRealPlayer; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPORTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
