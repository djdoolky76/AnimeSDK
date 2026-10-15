#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BCKKHDBAENJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x162D5090)
#define BCKKHDBAENJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x162D50D0)
#define BCKKHDBAENJ___C__HASVALUE_B__1_0_OFFSET UNITYSDK_OFFSET(0x162D50E0)
#define BCKKHDBAENJ___C__ISPOSITIVE_B__3_0_OFFSET UNITYSDK_OFFSET(0x162D5110)

inline static constexpr unsigned int BCKKHDBAENJ___c_TypeDefinitionIndex = 49979;

	class BCKKHDBAENJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TextID, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::TextID, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68630);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68638);
		}

		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKKHDBAENJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKKHDBAENJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasValue_b__1_0(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BCKKHDBAENJ___C__HASVALUE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsPositive_b__3_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCKKHDBAENJ___C__ISPOSITIVE_B__3_0_OFFSET))(this, a1);
		}

	};
