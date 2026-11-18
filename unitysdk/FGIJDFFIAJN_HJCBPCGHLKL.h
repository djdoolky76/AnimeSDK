#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FGIJDFFIAJN_HJCBPCGHLKL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x140F47F0)
#define FGIJDFFIAJN_HJCBPCGHLKL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x140F4880)
#define FGIJDFFIAJN_HJCBPCGHLKL_INVOKE_OFFSET UNITYSDK_OFFSET(0x140F44D0)
#define FGIJDFFIAJN_HJCBPCGHLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x140F44C0)

inline static constexpr unsigned int FGIJDFFIAJN_HJCBPCGHLKL_TypeDefinitionIndex = 79776;

class FGIJDFFIAJN_HJCBPCGHLKL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_HJCBPCGHLKL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Invoke(::System::Int32 HNKAEHPCJEC, ::System::Int32 DMJBFBDLKIN)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_HJCBPCGHLKL_INVOKE_OFFSET))(this, HNKAEHPCJEC, DMJBFBDLKIN);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 HNKAEHPCJEC, ::System::Int32 DMJBFBDLKIN, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_HJCBPCGHLKL_BEGININVOKE_OFFSET))(this, HNKAEHPCJEC, DMJBFBDLKIN, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_HJCBPCGHLKL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
