#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGOFKJDNLPB;
namespace System { class Object; }

#define NGOFKJDNLPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9A50)
#define NGOFKJDNLPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9A90)
#define NGOFKJDNLPB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAE9AA0)

inline static constexpr unsigned int NGOFKJDNLPB___c_TypeDefinitionIndex = 26477;

	class NGOFKJDNLPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOFKJDNLPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB___C_CTOR_OFFSET))(this);
		}

		::NGOFKJDNLPB* __cctor_b__28_0()
		{
			return ((::NGOFKJDNLPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFKJDNLPB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
