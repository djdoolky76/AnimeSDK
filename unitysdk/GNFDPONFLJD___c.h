#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFDPONFLJD;
namespace System { class Object; }

#define GNFDPONFLJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B08C0)
#define GNFDPONFLJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0900)
#define GNFDPONFLJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4B0910)

inline static constexpr unsigned int GNFDPONFLJD___c_TypeDefinitionIndex = 33324;

	class GNFDPONFLJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFDPONFLJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD___C_CTOR_OFFSET))(this);
		}

		::GNFDPONFLJD* __cctor_b__33_0()
		{
			return ((::GNFDPONFLJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
