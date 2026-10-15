#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }

#define FFJACAABNOO_AKPCPOJBDPG_OFFSET UNITYSDK_OFFSET(0x1EC07C70)
#define FFJACAABNOO_BGJALBMOGGK_OFFSET UNITYSDK_OFFSET(0x1EC07E00)
#define FFJACAABNOO_FNKOEBBAJJI_OFFSET UNITYSDK_OFFSET(0x1EC07E40)
#define FFJACAABNOO_KKALFKHJHCJ_OFFSET UNITYSDK_OFFSET(0x1EC07BF0)
#define FFJACAABNOO_PPKCOODEKOJ_OFFSET UNITYSDK_OFFSET(0x1EC07C30)

inline static constexpr unsigned int FFJACAABNOO_TypeDefinitionIndex = 35296;

	class FFJACAABNOO : public ::System::Object
	{
	public:
		static ::System::Int32 KKALFKHJHCJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FFJACAABNOO_KKALFKHJHCJ_OFFSET))();
		}

		static ::System::Int32 PPKCOODEKOJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FFJACAABNOO_PPKCOODEKOJ_OFFSET))();
		}

		static ::System::Int32 AKPCPOJBDPG(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FFJACAABNOO_AKPCPOJBDPG_OFFSET))(a1);
		}

		static ::System::Int32 BGJALBMOGGK()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FFJACAABNOO_BGJALBMOGGK_OFFSET))();
		}

		static ::System::Int32 FNKOEBBAJJI(::Collections::Pooled::PooledList_1<::System::String*>* a1)
		{
			return ((::System::Int32(*)(::Collections::Pooled::PooledList_1<::System::String*>*))((::PBYTE)hIl2Cpp + FFJACAABNOO_FNKOEBBAJJI_OFFSET))(a1);
		}

	};
