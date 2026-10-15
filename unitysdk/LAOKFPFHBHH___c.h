#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAOKFPFHBHH;
namespace System { class Object; }

#define LAOKFPFHBHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4BC0)
#define LAOKFPFHBHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4BF0)
#define LAOKFPFHBHH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8A4C00)

inline static constexpr unsigned int LAOKFPFHBHH___c_TypeDefinitionIndex = 25410;

	class LAOKFPFHBHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOKFPFHBHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH___C_CTOR_OFFSET))(this);
		}

		::LAOKFPFHBHH* __cctor_b__38_0()
		{
			return ((::LAOKFPFHBHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
