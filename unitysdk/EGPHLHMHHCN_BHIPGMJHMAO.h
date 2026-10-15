#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EGPHLHMHHCN_BHIPGMJHMAO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1549B730)
#define EGPHLHMHHCN_BHIPGMJHMAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1549B630)
#define EGPHLHMHHCN_BHIPGMJHMAO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1549B770)
#define EGPHLHMHHCN_BHIPGMJHMAO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1549B720)

inline static constexpr unsigned int EGPHLHMHHCN_BHIPGMJHMAO_TypeDefinitionIndex = 55821;

	class EGPHLHMHHCN_BHIPGMJHMAO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EGPHLHMHHCN_BHIPGMJHMAO_CTOR_OFFSET))(this, a1, a2);
		}

		::GELIALJDFBL* Invoke(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EGPHLHMHHCN_BHIPGMJHMAO_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EGPHLHMHHCN_BHIPGMJHMAO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::GELIALJDFBL* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EGPHLHMHHCN_BHIPGMJHMAO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
