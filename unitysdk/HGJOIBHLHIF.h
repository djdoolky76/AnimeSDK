#pragma once
#include "unitysdk/unitysdk.h"
class MFEPILDHJLL;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HGJOIBHLHIF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9ACC0)
#define HGJOIBHLHIF_FJDGBLMPGCE_OFFSET UNITYSDK_OFFSET(0x15C9AFD0)
#define HGJOIBHLHIF__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15C9AE50)
#define HGJOIBHLHIF__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15C9AF10)

inline static constexpr unsigned int HGJOIBHLHIF_TypeDefinitionIndex = 52882;

	class HGJOIBHLHIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MFEPILDHJLL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MFEPILDHJLL*))((::PBYTE)hIl2Cpp + HGJOIBHLHIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJOIBHLHIF__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJOIBHLHIF__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void FJDGBLMPGCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGJOIBHLHIF_FJDGBLMPGCE_OFFSET))(this, a1);
		}

	};
