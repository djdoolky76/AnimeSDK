#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBPHINKJJIM;
namespace System { class Object; }

#define LBPHINKJJIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E1830)
#define LBPHINKJJIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E1860)
#define LBPHINKJJIM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8E1870)

inline static constexpr unsigned int LBPHINKJJIM___c_TypeDefinitionIndex = 28148;

	class LBPHINKJJIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBPHINKJJIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM___C_CTOR_OFFSET))(this);
		}

		::LBPHINKJJIM* __cctor_b__33_0()
		{
			return ((::LBPHINKJJIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHINKJJIM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
