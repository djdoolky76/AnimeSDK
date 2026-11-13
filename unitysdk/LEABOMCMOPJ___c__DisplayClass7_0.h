#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
class KNOOGHJPPBL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEABOMCMOPJ___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA5750)
#define LEABOMCMOPJ___C__DISPLAYCLASS7_0___GETBUFFEDAVATARDISPLAYDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1ACA57C0)

inline static constexpr unsigned int LEABOMCMOPJ___c__DisplayClass7_0_TypeDefinitionIndex = 64048;

	class LEABOMCMOPJ___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::KNOOGHJPPBL* obtainedAvatarService; // 0x10
		::DNFDBKCPBNM roleIdentifier; // 0x18
		::System::Boolean obtained; // 0x1C
		::System::Byte _padding0[0x3];
		::OIPMNNAHIFP identifier; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEABOMCMOPJ___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetBuffedAvatarDisplayData_b__0(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEABOMCMOPJ___C__DISPLAYCLASS7_0___GETBUFFEDAVATARDISPLAYDATA_B__0_OFFSET))(this, a1, a2);
		}

	};
