#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMMGJIFCBHL.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define OKOHGMMFPLF_KAKCGFHNEEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF3990)

inline static constexpr unsigned int OKOHGMMFPLF_KAKCGFHNEEJ_TypeDefinitionIndex = 71026;

	class OKOHGMMFPLF_KAKCGFHNEEJ : public ::System::Object
	{
	public:
		::DEBEAKKOHLN* EGOMDGLJIGG; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::System::Object*>*>* IKNPEONKANB; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>* JFALBIAGHEE; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* GJIJLFGEEFC; // 0x28
		::System::Collections::Generic::List_1<::KMMGJIFCBHL>* HNLPIMGCPOP; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* HBDHMCEOMIA; // 0x38
		::System::Boolean AHKNHOCAKBG; // 0x40
		::System::Boolean KHPDMOINFOM; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOHGMMFPLF_KAKCGFHNEEJ_CTOR_OFFSET))(this);
		}

	};
