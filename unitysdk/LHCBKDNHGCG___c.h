#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHCBKDNHGCG;
namespace System { class Object; }

#define LHCBKDNHGCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E92FD10)
#define LHCBKDNHGCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92FD50)
#define LHCBKDNHGCG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E92FD60)

inline static constexpr unsigned int LHCBKDNHGCG___c_TypeDefinitionIndex = 27780;

	class LHCBKDNHGCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHCBKDNHGCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG___C_CTOR_OFFSET))(this);
		}

		::LHCBKDNHGCG* __cctor_b__23_0()
		{
			return ((::LHCBKDNHGCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
