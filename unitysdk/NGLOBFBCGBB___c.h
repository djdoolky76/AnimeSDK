#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGLOBFBCGBB;
namespace System { class Object; }

#define NGLOBFBCGBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE7900)
#define NGLOBFBCGBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE7930)
#define NGLOBFBCGBB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAE7940)

inline static constexpr unsigned int NGLOBFBCGBB___c_TypeDefinitionIndex = 31312;

	class NGLOBFBCGBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGLOBFBCGBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB___C_CTOR_OFFSET))(this);
		}

		::NGLOBFBCGBB* __cctor_b__28_0()
		{
			return ((::NGLOBFBCGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
