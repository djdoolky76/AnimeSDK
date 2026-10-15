#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BEMKNPIFMBI;
class OONGDLIDJJJ;
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CGAPIBGENKO_GDNOGKANLEE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCC60060)
#define CGAPIBGENKO_GDNOGKANLEE_CTOR_OFFSET UNITYSDK_OFFSET(0xCC5FF70)
#define CGAPIBGENKO_GDNOGKANLEE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCC600A0)
#define CGAPIBGENKO_GDNOGKANLEE_INVOKE_OFFSET UNITYSDK_OFFSET(0xCC5E9E0)

inline static constexpr unsigned int CGAPIBGENKO_GDNOGKANLEE_TypeDefinitionIndex = 54331;

	class CGAPIBGENKO_GDNOGKANLEE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CGAPIBGENKO_GDNOGKANLEE_CTOR_OFFSET))(this, a1, a2);
		}

		::BEMKNPIFMBI* Invoke(::RPG::GameCore::ConsiderationAxisConfig* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::BEMKNPIFMBI*(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + CGAPIBGENKO_GDNOGKANLEE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ConsiderationAxisConfig* a1, ::OONGDLIDJJJ* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::OONGDLIDJJJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CGAPIBGENKO_GDNOGKANLEE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::BEMKNPIFMBI* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::BEMKNPIFMBI*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CGAPIBGENKO_GDNOGKANLEE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
