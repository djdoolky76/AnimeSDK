#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CEIKPDGEEMG_FAFELDDCOFM_OFFSET UNITYSDK_OFFSET(0x1DD15190)
#define CEIKPDGEEMG_LOGDBNMPOPC_OFFSET UNITYSDK_OFFSET(0x1DD15300)

inline static constexpr unsigned int CEIKPDGEEMG_TypeDefinitionIndex = 6195;

	class CEIKPDGEEMG : public ::System::Object
	{
	public:
		static ::System::Boolean FAFELDDCOFM(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CEIKPDGEEMG_FAFELDDCOFM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean LOGDBNMPOPC(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CEIKPDGEEMG_LOGDBNMPOPC_OFFSET))(a1, a2, a3, a4);
		}

	};
