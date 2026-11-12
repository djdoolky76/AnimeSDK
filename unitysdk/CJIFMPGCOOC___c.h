#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJIFMPGCOOC;
namespace System { class Object; }

#define CJIFMPGCOOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B1780)
#define CJIFMPGCOOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B17C0)
#define CJIFMPGCOOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3B17D0)

inline static constexpr unsigned int CJIFMPGCOOC___c_TypeDefinitionIndex = 28223;

	class CJIFMPGCOOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJIFMPGCOOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFMPGCOOC___C_CTOR_OFFSET))(this);
		}

		::CJIFMPGCOOC* __cctor_b__28_0()
		{
			return ((::CJIFMPGCOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFMPGCOOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
