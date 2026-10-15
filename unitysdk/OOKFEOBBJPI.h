#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class CBHJEFENGMN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define OOKFEOBBJPI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DD59910)
#define OOKFEOBBJPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5B340)
#define OOKFEOBBJPI_KPHCAJNLJBM_OFFSET UNITYSDK_OFFSET(0x1DD5AFF0)
#define OOKFEOBBJPI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DD5A570)

inline static constexpr unsigned int OOKFEOBBJPI_TypeDefinitionIndex = 6192;

	class OOKFEOBBJPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOKFEOBBJPI_CTOR_OFFSET))(this);
		}

		static ::System::Boolean BPLPBPMEODA(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1, ::System::Single a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*, ::System::Single, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + OOKFEOBBJPI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PAGKOAEOLKA(::System::Collections::Generic::HashSet_1<::System::Object*>* a1, ::System::Int32 a2, ::CBHJEFENGMN* a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::Object*>*, ::System::Int32, ::CBHJEFENGMN*))((::PBYTE)hIl2Cpp + OOKFEOBBJPI_PAGKOAEOLKA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KPHCAJNLJBM(::System::Collections::Generic::HashSet_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + OOKFEOBBJPI_KPHCAJNLJBM_OFFSET))(a1, a2);
		}

	};
