#pragma once
#include "unitysdk/unitysdk.h"
class DEBEAKKOHLN;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define DEBEAKKOHLN_DOPJGEELHEE_CTOR_OFFSET UNITYSDK_OFFSET(0xF5A30)
#define DEBEAKKOHLN_DOPJGEELHEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF5A60)
#define DEBEAKKOHLN_DOPJGEELHEE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF5A20)
#define DEBEAKKOHLN_DOPJGEELHEE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF5AB0)
#define DEBEAKKOHLN_DOPJGEELHEE_RESET_OFFSET UNITYSDK_OFFSET(0xF5B20)
#define DEBEAKKOHLN_DOPJGEELHEE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF5A20)

	struct alignas(8) DEBEAKKOHLN_DOPJGEELHEE
	{
		::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* MGMGMOGJLJC; // 0x10
		::System::Int32 ALMAPGOEFCM; // 0x18
		::System::Void _ctor(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DOPJGEELHEE_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* get_Current()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DOPJGEELHEE_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DOPJGEELHEE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DOPJGEELHEE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DOPJGEELHEE_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_DOPJGEELHEE_RESET_OFFSET))(this);
		}

	};
