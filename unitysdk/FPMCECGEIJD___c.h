#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMCECGEIJD;
namespace System { class Object; }

#define FPMCECGEIJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DF720)
#define FPMCECGEIJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DF760)
#define FPMCECGEIJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3DF770)

inline static constexpr unsigned int FPMCECGEIJD___c_TypeDefinitionIndex = 30870;

	class FPMCECGEIJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMCECGEIJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMCECGEIJD___C_CTOR_OFFSET))(this);
		}

		::FPMCECGEIJD* __cctor_b__33_0()
		{
			return ((::FPMCECGEIJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMCECGEIJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
