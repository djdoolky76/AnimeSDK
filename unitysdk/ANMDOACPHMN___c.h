#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANMDOACPHMN;
namespace System { class Object; }

#define ANMDOACPHMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201A2590)
#define ANMDOACPHMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201A25D0)
#define ANMDOACPHMN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201A25E0)

inline static constexpr unsigned int ANMDOACPHMN___c_TypeDefinitionIndex = 33854;

	class ANMDOACPHMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANMDOACPHMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN___C_CTOR_OFFSET))(this);
		}

		::ANMDOACPHMN* __cctor_b__28_0()
		{
			return ((::ANMDOACPHMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
