#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class OBJANKHLNGO;

#define SOFA_BASEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE975DB0)

namespace Sofa
{
	class BaseViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::OBJANKHLNGO* _Messenger; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
