#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISocialCircleFriendCardContext.h"

class MBODLFKOJOP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT_REPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x167C8620)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardContext_Report_TypeDefinitionIndex = 76489;

	class UISocialCircleFriendCardContext_Report : public ::MoleMole::UISocialCircleFriendCardContext
	{
	public:
		::MBODLFKOJOP* ReportData; // 0x78
		::System::Func_2<::System::Int32, ::System::Boolean>* OnClickCheckMark; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDCONTEXT_REPORT__CTOR_OFFSET))(this);
		}
	};
}
