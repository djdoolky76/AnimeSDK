#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGKJEFPJPB;
namespace System { class Object; }

#define HFGKJEFPJPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53B6B0)
#define HFGKJEFPJPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53B6F0)
#define HFGKJEFPJPB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E53B700)

inline static constexpr unsigned int HFGKJEFPJPB___c_TypeDefinitionIndex = 31126;

	class HFGKJEFPJPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGKJEFPJPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB___C_CTOR_OFFSET))(this);
		}

		::HFGKJEFPJPB* __cctor_b__43_0()
		{
			return ((::HFGKJEFPJPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
