#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EGLMELAHLIO;
class HDGDGHMDJLK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYTRICKLEVELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9C90)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityTrickLevelContext_TypeDefinitionIndex = 84091;

	class ActivityTrickLevelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HDGDGHMDJLK* TrickData; // 0x28
		::System::Collections::Generic::List_1<::EGLMELAHLIO*>* Rows; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYTRICKLEVELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
