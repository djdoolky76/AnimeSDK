#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMHHBMNIJJB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IBPFCFONKDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x188C5590)
#define IBPFCFONKDO_ONBOPPDBBKK_OFFSET UNITYSDK_OFFSET(0x188C51A0)
#define IBPFCFONKDO_PNMOACAMJLH_OFFSET UNITYSDK_OFFSET(0x188C5320)

inline static constexpr unsigned int IBPFCFONKDO_TypeDefinitionIndex = 79858;

	class IBPFCFONKDO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_EJGOBHAICFK()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "IBPFCFONKDO")->GetStaticField(0x36A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPFCFONKDO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ONBOPPDBBKK(::JMHHBMNIJJB* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::JMHHBMNIJJB*, ::System::UInt32))((::PBYTE)hIl2Cpp + IBPFCFONKDO_ONBOPPDBBKK_OFFSET))(a1, a2);
		}

		static ::System::Boolean PNMOACAMJLH(::JMHHBMNIJJB* a1)
		{
			return ((::System::Boolean(*)(::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + IBPFCFONKDO_PNMOACAMJLH_OFFSET))(a1);
		}

	};
