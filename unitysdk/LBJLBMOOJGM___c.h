#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEBGAGBELM.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBJLBMOOJGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF35310)
#define LBJLBMOOJGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF35340)
#define LBJLBMOOJGM___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1FF35350)
#define LBJLBMOOJGM___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1FF353B0)

inline static constexpr unsigned int LBJLBMOOJGM___c_TypeDefinitionIndex = 45371;

	class LBJLBMOOJGM___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Collections::Generic::List_1<::FIEBGAGBELM>*>** StaticGet___9__9_0()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::FIEBGAGBELM>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65540);
		}

		static ::System::Func_1<::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>*>** StaticGet___9__9_1()
		{
			return (::System::Func_1<::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65548);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBJLBMOOJGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FIEBGAGBELM>* __ctor_b__9_0()
		{
			return ((::System::Collections::Generic::List_1<::FIEBGAGBELM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___C___CTOR_B__9_0_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>* __ctor_b__9_1()
		{
			return ((::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___C___CTOR_B__9_1_OFFSET))(this);
		}

	};
