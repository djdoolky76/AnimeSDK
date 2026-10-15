#pragma once
#include "unitysdk/unitysdk.h"
class DEBEAKKOHLN;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define DEBEAKKOHLN_HNLNMJCDHJD_CTOR_OFFSET UNITYSDK_OFFSET(0xF5BC0)
#define DEBEAKKOHLN_HNLNMJCDHJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF5BF0)
#define DEBEAKKOHLN_HNLNMJCDHJD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF5BB0)
#define DEBEAKKOHLN_HNLNMJCDHJD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF5C40)
#define DEBEAKKOHLN_HNLNMJCDHJD_RESET_OFFSET UNITYSDK_OFFSET(0xF5C50)
#define DEBEAKKOHLN_HNLNMJCDHJD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF5BB0)

inline static constexpr unsigned int DEBEAKKOHLN_HNLNMJCDHJD_TypeDefinitionIndex = 69809;

	struct alignas(8) DEBEAKKOHLN_HNLNMJCDHJD
	{
		::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* MGMGMOGJLJC; // 0x10
		::System::Int32 ALMAPGOEFCM; // 0x18
		::System::Int32 NGHAKDBIPKO; // 0x1C
		::System::Void _ctor(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HNLNMJCDHJD_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_Current()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HNLNMJCDHJD_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HNLNMJCDHJD_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HNLNMJCDHJD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HNLNMJCDHJD_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBEAKKOHLN_HNLNMJCDHJD_RESET_OFFSET))(this);
		}

	};
