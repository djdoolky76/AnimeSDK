#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJCIHMFOMC;
namespace System { class Object; }

#define FDJCIHMFOMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205385B0)
#define FDJCIHMFOMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205385F0)
#define FDJCIHMFOMC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20538600)

inline static constexpr unsigned int FDJCIHMFOMC___c_TypeDefinitionIndex = 30551;

	class FDJCIHMFOMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJCIHMFOMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC___C_CTOR_OFFSET))(this);
		}

		::FDJCIHMFOMC* __cctor_b__33_0()
		{
			return ((::FDJCIHMFOMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJCIHMFOMC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
