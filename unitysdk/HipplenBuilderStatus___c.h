#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HipplenBuilderStatus_LHKGHMBBAMD;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define HIPPLENBUILDERSTATUS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DE4970)
#define HIPPLENBUILDERSTATUS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE49B0)
#define HIPPLENBUILDERSTATUS___C__BUFFTIMEPASS_B__8_0_OFFSET UNITYSDK_OFFSET(0x15DE49C0)

inline static constexpr unsigned int HipplenBuilderStatus___c_TypeDefinitionIndex = 47211;

	class HipplenBuilderStatus___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35740);
		}

		static ::System::Predicate_1<::System::Object*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _BuffTimePass_b__8_0(::HipplenBuilderStatus_LHKGHMBBAMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HipplenBuilderStatus_LHKGHMBBAMD*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS___C__BUFFTIMEPASS_B__8_0_OFFSET))(this, a1);
		}

	};
